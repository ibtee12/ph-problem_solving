async function retry(fn, times) {
    let lastError;

    for (let i = 0; i < times; i++) {
        try {
            return await fn();
        } catch (error) {
            lastError = error;
        }
    }

    throw lastError;
}

let count = 0;

async function unstableFetch() {
    count++;
    if (count < 3) {
        throw new Error("Failed");
    }
    return "Success";
}

async function run() {
    const result = await retry(unstableFetch, 3);
    console.log(result);
}

run();
