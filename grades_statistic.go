package main
import (
	"fmt"
	_"math"
)
func main(){
	var stu float32
	var total,avg_c,avg_all,total_all float32
	var qualifiled int
	for i:=1;i<=3;i++{
	fmt.Printf("please enter data of class %d\n",i)
		total=0
		for j := 0; j < 5; j++ {
			
			fmt.Scan(&stu)
			total+=stu
			if stu>=60.00 {
				qualifiled++
			}
		}
	avg_c=total/5.00
	total_all+=total
	fmt.Printf("\nclass%d average:%.2f\n",i,avg_c)
	}
	avg_all=total_all/15.00
	fmt.Printf("all classes average:%.2f\n",avg_all)
	fmt.Printf("total qualifiled studaents:%d",qualifiled)
}