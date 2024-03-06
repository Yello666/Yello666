package main
import(
	"fmt"
)
func main(){
	var name string
	var pwd string
	var num=3
	for i := 1; i <= num;  {
		fmt.Print("name:>\n")
		fmt.Scan(&name)
		fmt.Print("password:>\n")
		fmt.Scan(&pwd)

		if name=="Q"&&pwd=="520" {
			fmt.Print("我也爱你\n")
			break
		} else{
			num--
			fmt.Printf("you only have %d chance\n",num)
		}
	}
	if num==0 {
		fmt.Print("EGG will punish you")
	}
}