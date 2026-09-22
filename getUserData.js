async function getUserData(id) {
    await new Promise((resolve) => {
        setTimeout(resolve, 500);
    });

    return {
        id: id,
        name: "Test User"
    };
}

async function main() {
    const user = await getUserData(1);
    console.log(user);
}

main();
