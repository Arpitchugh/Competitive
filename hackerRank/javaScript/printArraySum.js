// Given an array print it's sum

array = [1, 2, 3, 4, 5]
let sum = 0
// using arrow function to print the sum.
const printArrayVariable = array => {
  // {1}
  // for (let i = 0; i < array.length; i++) {
  //   sum += array[i]
  // }

  // {2}
  // array.forEach(element => {
  //   sum += element
  // })

  // {3}
  // Will return an array which returns sum of elements like [1,3,6,10,15]
  // return array.map(elem => (sum += elem))
  // array.map(elem => (sum += elem))

  // {4}
  // for (const iterator of array) {
  //   sum+= iterator; 
  // }

  // {5}
  return array.reduce((a, b) => a + b, 0)

  // return sum
}

console.log(printArrayVariable(array))
