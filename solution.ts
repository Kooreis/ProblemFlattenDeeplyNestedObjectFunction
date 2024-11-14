Here is a TypeScript console application that solves the problem:

```typescript
class App {
    constructor() {
        const nestedObject = {
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

        const flattenedObject = this.flattenObject(nestedObject);
        console.log(flattenedObject);
    }

    flattenObject(obj: any, parent?: string, res = {}): any {
        for (let key in obj) {
            let propName = parent ? parent + '.' + key : key;
            if (typeof obj[key] == 'object') {
                this.flattenObject(obj[key], propName, res);
            } else {
                res[propName] = obj[key];
            }
        }
        return res;
    }
}

new App();
```

In this application, we have a class `App` with a constructor that creates a deeply nested object and then calls the `flattenObject` method to flatten the object. The `flattenObject` method is a recursive function that iterates over the properties of the object and if the property value is an object, it calls itself with the current property name appended to the parent property name. If the property value is not an object, it adds the property to the result object with the full property name (including parent property names) as the key. The result is a single-level object with the nested property names concatenated with dots.