Here is a C++ solution using nlohmann's json library for handling JSON objects. This solution assumes that the deeply nested object is a JSON object.

```cpp
#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

json flatten(const json& j, const std::string& prefix = "") {
    json result;

    for (json::const_iterator it = j.begin(); it != j.end(); ++it) {
        if (it->is_structured()) {
            json sub_object = flatten(*it, prefix + it.key() + "_");
            result.merge_patch(sub_object);
        } else {
            result[prefix + it.key()] = it.value();
        }
    }

    return result;
}

int main() {
    json j = {
        {"a", 1},
        {"b", 2},
        {"c", {
            {"d", 3},
            {"e", {
                {"f", 4},
                {"g", 5}
            }}
        }}
    };

    json flat = flatten(j);

    for (json::iterator it = flat.begin(); it != flat.end(); ++it) {
        std::cout << it.key() << ": " << it.value() << "\n";
    }

    return 0;
}
```

This program will output:

```
a: 1
b: 2
c_d: 3
c_e_f: 4
c_e_g: 5
```

Please note that you need to have nlohmann's json library installed in your system to run this program. You can install it using vcpkg or directly include the single header file in your project.