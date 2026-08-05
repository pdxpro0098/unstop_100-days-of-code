function processData(input) {
    let inputArr = input.trim().split("\n");

    let temp = inputArr.slice(1, inputArr.length - 1);
    let k = Number(inputArr[inputArr.length - 1]);

    let table = {};

    for (let str of temp) {
        table[str] = (table[str] || 0) + 1;
    }

    let count = 0;
    for (let str of temp) {
        if (table[str] === 1) {
            count++;
            if (count === k) {
                console.log(str);
                return;
            }
        }
    }

    console.log(-1);
}