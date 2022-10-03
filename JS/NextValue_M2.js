<<<<<<< HEAD
const array=[
    {id:'one',next:"two", value:null},
    {id:'two',next:"three", value:null},
    {id:'three',next: null, value:null}
];
var result=[]
function updatevalue(array){
    if(result.length==0){
        for(var i in array){
            if(array[i].next==null){
                result.unshift(array[i])
                array.splice(array[i],1)
            }
        }
    }
    for(var j in array){
        if(result[0].id==array[j].next){
            array[j].value=result[0]
            result.unshift(array[j])
            array.splice(array[j],1)
            updatevalue(array)
            break
            }
        }
    
}
updatevalue(array.reverse())

=======
const array=[
    {id:'one',next:"two", value:null},
    {id:'two',next:"three", value:null},
    {id:'three',next: null, value:null}
];
var result=[]
function updatevalue(array){
    if(result.length==0){
        for(var i in array){
            if(array[i].next==null){
                result.unshift(array[i])
                array.splice(array[i],1)
            }
        }
    }
    for(var j in array){
        if(result[0].id==array[j].next){
            array[j].value=result[0]
            result.unshift(array[j])
            array.splice(array[j],1)
            updatevalue(array)
            break
            }
        }
    
}
updatevalue(array.reverse())

>>>>>>> ad7b8cc6d2b9f59998b94ebed3eccbd4b284e1cb
console.log(result)