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

>>>>>>> 218d06a5590b574fc3a6c257200b997baa9ad88e
console.log(result)