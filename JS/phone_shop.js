//  Name: Shoaib Sabir
//  Username: Shoaib019
//  Question: find out you can afford phone or not by calculating
//            phone price with accessories also add tax

//  DATA
TAX_RATE = 0.08;
PHONE_PRICE = 99.99;
ACCESSORY_PRICE = 9.99;
SPENDING_THRESHOLD = 200;
var bank_account_balance = 303.91;

console.log(calculatePurchaseAmount()); // this is starting point

function calculatePurchaseAmount() {
  totalSpent = calculateTotalPhonePrice();
  totalAmount = totalSpent + calculatingTax(totalSpent);
  return formatThePrice(totalAmount);
}

function canBuy(spent){ // this function keeps some amount in bank account
  remaining_bal = bank_account_balance - spent;
  return remaining_bal > ACCESSORY_PRICE ? true : false;
}

function calculateTotalPhonePrice(){
    let spent = 0;
  while (canBuy(spent)){
      spent += PHONE_PRICE;

      if(spent < SPENDING_THRESHOLD){
          spent += ACCESSORY_PRICE;
      }
  }
  return spent;
}


function calculatingTax(totalSpent){
  return totalSpent * TAX_RATE;
}

function formatThePrice(totalAmount){
  return "Total Price: $" + String(totalAmount.toFixed(2));
}