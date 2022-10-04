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
>>>>>>> 218d06a5590b574fc3a6c257200b997baa9ad88e
console.log(arr)