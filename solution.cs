Here is a JavaScript solution using recursion:

```javascript
function flattenObject(obj, parent, res = {}) {
    for(let key in obj) {
        let propName = parent ? parent + '.' + key : key;
        if(typeof obj[key] == 'object') {
            flattenObject(obj[key], propName, res);
        } else {
            res[propName] = obj[key];
        }
    }
    return res;
}

// Test the function
let nestedObject = {
    a: 1,
    b: {
        c: 2,
        d: {
            e: 3,
            f: {
                g: 4
            }
        }
    }
};

console.log(flattenObject(nestedObject));
```

This script defines a function `flattenObject` that takes a nested object and returns a new object where each key is a path to the original value in the nested object. The function uses recursion to traverse the nested object. The `flattenObject` function is then tested with a deeply nested object. The output of the script is a flattened version of the nested object.