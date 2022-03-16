function pigreco() {
    var count:number = 1
    var pi:number=0
    var divisore:number=1
    
    for (let index = 0; index < 1000; index++) {
        
        if(count%2==0){
            pi=pi-(4/divisore)
        }else{
            pi=pi+(4/divisore)
        }
        count++
        divisore=divisore+2
    }
    return pi 
}

console.log("Il pigreco è " + pigreco().toString())
