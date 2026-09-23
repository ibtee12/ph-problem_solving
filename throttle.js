function throttle(fn, limit) {
    let lastCall = 0;

    return function(...args) {
        const now = Date.now();
        if (now - lastCall >= limit) {
            lastCall = now;
            fn(...args);
        }
    };
}

function onScroll() {
    console.log("Scrolled");
}

const throttledScroll = throttle(onScroll, 200);
throttledScroll();
throttledScroll();
