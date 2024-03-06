package main
import(
	"fmt"
	"math/rand"
	"time"
 
)
func main(){
	var arr1[26] byte
	for i := 0; i < len(arr1); i++ {
		arr[i]=65+byte(i)
		fmt.Printf("%c ",arr1[i])
	}
		var arr[26] int
		var input,count int
		fmt.Printf("please enter:>\n")
	for i := 0; ; i++ {
		input,_=fmt.Scanf("%d",&arr[i])
		
		if input!=1{
			break
		}
		count++
		
	}

	var sum int=0
	var avg float32
	for _,v:=range arr{
		sum+=v
	}
	avg=float32(sum)/float32(count)
	fmt.Println(arr)
	fmt.Printf("sum=%d,average=%.3f,count=%d",sum,avg,count)
}