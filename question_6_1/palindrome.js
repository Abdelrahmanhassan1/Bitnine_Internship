function check_palindrome(text) {
  text = text.toLowerCase();
  let j = text.length - 1;
  for (let i = 0; i < text.length; i++) {
    if (i == j) {
      console.log(true);
      return true;
    }
    if (text[i] === text[j]) {
      j--;
    } else {
      console.log(false);
      return false;
    }
  }
}

check_palindrome("MadAm");
