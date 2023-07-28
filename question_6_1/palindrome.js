function check_palindrome(text) {
  text = text.toLowerCase();
  let j = text.length - 1;
  for (let i = 0; i < text.length; i++) {
    if (i == j) {
      console.log(true);

      document.getElementById("palindrome").innerHTML = "This is a palindrome";

      return true;
    }
    if (text[i] === text[j]) {
      j--;
    } else {
      console.log(false);

      document.getElementById("palindrome").innerHTML =
        "This is not a palindrome";
      return false;
    }
  }
}

check_palindrome("MadAm");
