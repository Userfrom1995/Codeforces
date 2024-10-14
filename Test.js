const readline = require('readline');

// Create interface for input/output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Store all input lines
let input = [];

// Read lines and push into the input array
rl.on('line', (line) => {
    input.push(line);
});

// Close event triggers when input stream ends
rl.on('close', () => {
    main();
});

// Simulating C++ style cin by reading input values sequentially
function main() {
    let idx = 0;
    
    // Number of test cases
    let t = parseInt(input[idx++]);

    // Process each test case
    while (t--) {
        let l = parseInt(input[idx++]);  // Read l
        let r = parseInt(input[idx++]);  // Read r
        solve(l, r);  // Pass to solve function
    }
}

function solve(l, r) {
    let ans = 0;

    if (l % 2 === 0 && r % 2 === 0) {
        ans = (r - l) / 2;
        console.log(Math.floor(ans / 2));  // Output result
        return;
    } else {
        ans = Math.floor((r - l) / 2) + 1;
        console.log(Math.floor(ans / 2));  // Output result
        return;
    }
}
