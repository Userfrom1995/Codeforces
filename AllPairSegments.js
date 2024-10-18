function gcd(a, b) {
    return b === 0 ? a : gcd(b, a % b);
}

function lcm(a, b) {
    return (a / gcd(a, b)) * b;
}

function solve() {
    const [n, q] = readLine().split(' ').map(Number);
    const v = readLine().split(' ').map(Number);

    const mp = new Map();

    for (let i = 0; i < n; i++) {
        if (i === n - 1) {
            mp.set(i, (mp.get(i) || 0) + 1);
        } else {
            let totSeg = (n - i - 1) + (i * (n - i));
            mp.set(totSeg, (mp.get(totSeg) || 0) + 1);

            let remainingInteger = v[i + 1] - v[i] - 1;
            let secondSeg = (i + 1) * (n - i - 1);
            mp.set(secondSeg, (mp.get(secondSeg) || 0) + remainingInteger);
        }
    }

    const ans = [];

    for (let i = 0; i < q; i++) {
        const x = parseInt(readLine());
        ans.push(mp.get(x) || 0);
    }

    console.log(ans.join(' '));
}

// Driver function
function main() {
    const tt = parseInt(readLine());
    for (let t = 0; t < tt; t++) {
        solve();
    }
}

// Example mock of readLine function for input simulation
// let input = `1
// 5 3
// 1 2 3 5 7
// 3
// 7
// 9`;
// let index = 0;
// const lines = input.split('\n');
// function readLine() {
//     return lines[index++];
// }

// Call main function
main();
