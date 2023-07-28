function find_missing_number(array) {
  // this function should find the missing number in an array sorted from 1 to 45
  // and return the missing number(s)
  // if there is no missing number, return false
  // if there are multiple missing numbers, return an array of the missing numbers
  // if there is one missing number, return the missing number
  // if the array is empty, return false

  // your code here

  let missing_numbers = [];
  let missing_number = false;
  let j = 0;
  for (let i = 1; i <= 45; i++) {
    if (i === array[j]) {
      j++;
    } else {
      missing_numbers.push(i);
    }
  }
  if (missing_numbers.length === 0) {
    console.log(false);
    document.getElementById("missing").innerHTML = "No missing numbers";
    return false;
  } else if (missing_numbers.length === 1) {
    missing_number = missing[0];
    console.log(missing_number);
    document.getElementById("missing").innerHTML = missing_number;
    return missing_number;
  } else {
    console.log(missing_numbers);
    document.getElementById("missing").innerHTML = `[${missing_numbers}]`;
    return missing_numbers;
  }
}

let numbers = [1, 2, 3, 5, 6, 7, 8, 9, 10, 13, 43];

find_missing_number(numbers);
