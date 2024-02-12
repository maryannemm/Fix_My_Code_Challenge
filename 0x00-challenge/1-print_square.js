#!/usr/bin/node
/*
    Print a square with the character #
    
    The size of the square must be the first argument 
    of the program.
*/

if (process.argv.length !== 3 || isNaN(process.argv[2])) {
    console.error("Missing or invalid argument");
    console.error("Usage: ./1-print_square.js <size>");
    console.error("Example: ./1-print_square.js 8");
    process.exit(1);
}

const size = parseInt(process.argv[2]);

for (let i = 0; i < size; i++) {
    console.log("#".repeat(size));
}

