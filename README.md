# Question: How do you create a function that flattens a deeply nested object into a single-level object? JavaScript Summary

The JavaScript code provided defines a function named `flattenObject` that is designed to take a deeply nested object and transform it into a single-level object. The function operates by using recursion, a programming technique where a function calls itself in order to solve a problem. The function iterates over each key in the input object. If the value associated with a key is another object (indicating further nesting), the function calls itself with this nested object, appending the current key to the 'parent' string to keep track of the nesting structure. If the value is not an object, it simply adds the key-value pair to the result object, with the key being the 'parent' string plus the current key. This process continues until all nested objects have been flattened. The function is then tested with a deeply nested object, and the output is a single-level object where each key is a path to the original value in the nested object.

---

# TypeScript Differences

The TypeScript version of the solution is essentially the same as the JavaScript version in terms of logic and functionality. Both versions use recursion to flatten a deeply nested object into a single-level object. The main differences are due to TypeScript's static typing and object-oriented features.

1. TypeScript Class: In the TypeScript version, the solution is encapsulated within a class named `App`. This is a feature of TypeScript's support for object-oriented programming. The JavaScript version does not use a class and instead defines the function in the global scope.

2. Type Annotations: The TypeScript version uses type annotations (`obj: any, parent?: string, res = {}`) to specify the types of the parameters. This is a feature of TypeScript's static typing. The JavaScript version does not have type annotations because JavaScript is dynamically typed.

3. Method Call: In the TypeScript version, the recursive call to `flattenObject` is done using `this.flattenObject()`, indicating that it's a method of the current instance of the class. In the JavaScript version, the recursive call is done directly using `flattenObject()` because it's a standalone function.

4. Instantiation: In the TypeScript version, an instance of the `App` class is created at the end with `new App()`. This triggers the constructor, which in turn calls the `flattenObject` method. In the JavaScript version, the `flattenObject` function is called directly without needing to create an instance of a class.

In summary, the TypeScript version uses classes and type annotations, which are features not available in JavaScript. However, the core logic of the solution is the same in both versions.

---

# C++ Differences

The C++ version of the solution also uses recursion to flatten the nested JSON object, similar to the JavaScript version. However, there are some differences in the language features and methods used in the two versions.

1. Libraries: The C++ version uses the nlohmann's json library to handle JSON objects. This library provides a convenient way to work with JSON objects in C++, including iterating over the keys and values, checking if a value is a structured type (i.e., an object or an array), and merging two JSON objects. The JavaScript version does not need to use any external libraries because JavaScript has built-in support for JSON.

2. Iteration: In the JavaScript version, the `for...in` loop is used to iterate over the keys in the object. In the C++ version, an iterator is used to iterate over the keys and values in the JSON object. The iterator provides methods to get the key and value of the current item.

3. Recursion: Both versions use recursion to traverse the nested object. In the JavaScript version, the recursive call is made directly within the `if` statement. In the C++ version, the recursive call is made to a temporary `json` object, which is then merged into the result object.

4. Key Concatenation: In the JavaScript version, the keys are concatenated using the `+` operator and a dot (`.`) as the separator. In the C++ version, the keys are also concatenated using the `+` operator, but an underscore (`_`) is used as the separator.

5. Output: In the JavaScript version, the flattened object is logged to the console using `console.log`. In the C++ version, the flattened object is printed to the standard output using `std::cout`. The C++ version also includes a `main` function to test the `flatten` function, whereas the JavaScript version does not have an equivalent function.

---
