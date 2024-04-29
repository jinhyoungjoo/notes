# Javascript Promises

## Creating Promises
```javascript
let promise = new Promise((resolve, reject) => {
    if(someCondition) {
        resolve("Success");
    }else {
        reject("Failed");
    }
})
```

## Then-Catch Statements
- `then` takes in a function that uses the value in the resolve as a parameter.
- `catch` takes in a function that uses the value in the reject as a parameter.

```javascript
promise.then((message) => {
    console.log(message)
}).catch((message) => {
    console.log(message)
})
```
