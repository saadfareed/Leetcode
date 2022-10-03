<<<<<<< HEAD
const array=[
    {id:'one',next:"two", value:null},
    {id:'two',next:"three", value:null},
    {id:'three',next: "four", value:null},
    {id:'four',next: null, value:null}
];
var nextindex=0
function updatearray(array){
    updatevalue(array,0)
    function updatevalue(array,index){
        if(array[index].next==null){
            return array[index]
        }
        else{
           array[index].value=updatevalue(array,index+1)
           return array[index]
        }
    }
}

updatearray(array)
var arr=array
arr=JSON.stringify(array)
=======
const array=[
    {id:'one',next:"two", value:null},
    {id:'two',next:"three", value:null},
    {id:'three',next: "four", value:null},
    {id:'four',next: null, value:null}
];
var nextindex=0
function updatearray(array){
    updatevalue(array,0)
    function updatevalue(array,index){
        if(array[index].next==null){
            return array[index]
        }
        else{
           array[index].value=updatevalue(array,index+1)
           return array[index]
        }
    }
}

updatearray(array)
var arr=array
arr=JSON.stringify(array)
>>>>>>> ad7b8cc6d2b9f59998b94ebed3eccbd4b284e1cb
console.log(arr)