const array=[
    {id:1,name:"Bilal", city:"Lahore"},
    {id:1,name:"Bilal", city:"Lahore"},
    {id:3,name:"Hafsa", city:"Karachi"},
    {id:4,name:"Rehan", city:"Lahore"},
    {id:5,name:"Saqib", city:"Karachi"},
    {id:6,name:"Farhan", city:"Islamabad"}
];
const key='city';

function GroupByKey(arr,key) {
    var tempobj=[];
    arr.reduce((accumulator,currentvalue)=>{
        if(!accumulator[currentvalue[key]]){
            accumulator[currentvalue[key]]=[]
        }
        accumulator[currentvalue[key]].push(currentvalue)
        tempobj=accumulator
        return accumulator
    },{});
    return tempobj
    
}

console.log(GroupByKey(array,key))
