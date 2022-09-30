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
console.log(arr)