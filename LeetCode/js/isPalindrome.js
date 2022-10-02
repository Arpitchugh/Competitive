let string = 'racecar';

const isPalindrome = (string) => {
    return string.toLowerCase() === string.toLowerCase().split('').reverse().join('') ? true:false;
}

console.log(isPalindrome(string));