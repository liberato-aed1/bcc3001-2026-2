
const array = [15, 16, 17, 18, 19];

function dobra(x) {
    return x * 2
}

function incrementa(x) {
    return x + 10
}

// Cria um novo vetor onde cada elemento é o dobro do elemento correspondente no vetor original
const arrayDobrados = array.map(dobra);

// Cria um novo vetor onde cada elemento é o valor do elemento correspondente no vetor original incrementado em 1
const arrayIncrementados = array.map(incrementa);


console.log(array);                 // [15, 16, 17, 18, 19]
console.log(arrayDobrados);         // [30, 32, 34, 36, 38]
console.log(arrayIncrementados);    // [16, 17, 18, 19, 20]