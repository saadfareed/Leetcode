const arr = [
  "AND",
  ["<", "a", "b"],
  ["OR", ["==", "c", "d"], ["!=", "e", "f"]]
];
var result = [];
const operators = ["OR", "AND", "!=", "==", "<", ">"];
var resultstr = "";
function StringConvert(temp){
  for(var i in temp){
    if(operators.includes(temp[i])){
      result.push(temp[i])
    }
    else if(temp[i].length === 1 && temp[i].match(/[a-z]/i)){
      resultstr=resultstr+temp[i]+" "
      if(result.length!=0){
        tempdata=result.pop()
        resultstr=resultstr+tempdata+" "
      }
    }
  }
}
function COnvert(arr) {
  for(var i in arr){
    var value=arr[i]
    var temp=value.toString();
    temp=temp.split(',')
    if(value.length===3 &&(value[0]==='AND' || value[0]==='OR')){
        resultstr=resultstr+'('
        StringConvert(temp)
        resultstr=resultstr+')'
    }
    else{
      StringConvert(temp)
    }
  }
}
COnvert(arr);
console.log(resultstr);
