function GroupByKey(array,key)
{
  const tempData = {};

  for ( var index=0; index<array.length; index++)
   {

    if (!tempData[array[index][key]]) 
    {
        tempData[array[index][key]]=[];
    }

    tempData[array[index][key]].push(array[index])

  }
  return tempData
}
const array=[
    {id:1,name:"Bilal", city:"Lahore"},
    {id:1,name:"Bilal", city:"Lahore"},
    {id:3,name:"Hafsa", city:"Karachi"},
    {id:4,name:"Rehan", city:"Lahore"},
    {id:5,name:"Saqib", city:"Karachi"},
    {id:6,name:"Farhan", city:"Islamabad"}

];

const key='city';

console.log(GroupByKey(array,key))