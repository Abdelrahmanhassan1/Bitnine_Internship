let numebrs = [1, 2, 3, 5, 6, 7, 8];

function find_missing_number(array) {
  for (let i = 0; i < 45; i++) {
    if (i + 1 != array[i]) {
      console.log(i + 1);
      //   return i + 1;
    }
  }
}

find_missing_number(numebrs);

// test cases

// arr1 = [1, 2, 3 , 5 , 6, 7, ..., 43]
// arr2 = [1, 2, 3, 4 , 5 , 6, 7, ..., 43]
