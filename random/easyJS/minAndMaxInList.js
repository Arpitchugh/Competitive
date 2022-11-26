// MIN AND MAX IN LIST
/**
 * find min and max in 1D array
 * find min and max in 2D array
 * find min and max in a linkedList
 */

let arr = [1, 3, 2, 5, 3, 7, 8];
const minMaxInArray = arr => {
    let min = arr[0];
    let max = arr[0];
    arr.forEach(element => {
        if (element < min) min = element;
        if (element > max) max = element;   
    });
    return [min, max];
}
console.log(minMaxInArray(arr));

