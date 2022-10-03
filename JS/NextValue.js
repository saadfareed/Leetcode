<<<<<<< HEAD
const array=[
    {id:'one',next:"two", value:null},
    {id:'two',next:"three", value:null},
    {id:'three',next: "four", value:null},
    {id:'four',next: null, value:null}
];
var result=[]

function updatearray(arr){
    for(var i=arr.length-1; i>-1;i--){
        updatevalue(arr[i])
    }
}

function updatevalue(element){
    if(element.next==null){
        return (result.unshift(element))
    }
    else{
        for(var j in array){
            if(result[0].id==array[j].next){
                array[j].value=result[0]
                result.unshift(array[j])
                break
            }
        }
    }
}
updatearray(array)
result=JSON.stringify(result);
console.log(result)
=======
const array=[
    {id:'one',next:"two", value:null},
    {id:'two',next:"three", value:null},
    {id:'three',next: "four", value:null},
    {id:'four',next: null, value:null}
];
var result=[]

function updatearray(arr){
    for(var i=arr.length-1; i>-1;i--){
        updatevalue(arr[i])
    }
}

function updatevalue(element){
    if(element.next==null){
        return (result.unshift(element))
    }
    else{
        for(var j in array){
            if(result[0].id==array[j].next){
                array[j].value=result[0]
                result.unshift(array[j])
                break
            }
        }
    }
}
updatearray(array)
result=JSON.stringify(result);
console.log(result)
>>>>>>> ad7b8cc6d2b9f59998b94ebed3eccbd4b284e1cb
// console.log(result[0].value)