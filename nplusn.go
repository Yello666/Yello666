package main
import(
	"fmt"
)

func p9(num int){
	for i := 1; i <= num;i++ {
		for j := 1; j <=num; j++ {
			if j<=i {
			fmt.Printf("%d * %d =%d\t",j,i,i*j)//i is the line number
			} else{
				break
			}
			
		}
		fmt.Print("\n")
	}
}
func main(){
	num:=0
	fmt.Scanln(&num)
	p9(num)
}