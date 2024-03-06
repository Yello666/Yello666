package main
import(
	"fmt"
	"time"
)



func main(){
	now:=time.Now()
	ran:=now.Unix()
	random:=(int(ran))%100+1
	var num,chance int
	chance=10
	t_chance:=10
	for i := 1; i <= t_chance; i++ {
		fmt.Printf("Guess the number,you have %d chances:>\n",t_chance)
		fmt.Scanln(&num)
		if chance==0 {
			fmt.Println("you poor dog....")
			break
		}
		if num>random {
			fmt.Printf("BIG\n")
		}
		if num<random {
			fmt.Printf("small\n")
		}
		if num==random{
			if chance==10{
			fmt.Println("you are a genius!!")
			} else if chance==9&&chance==8{
				fmt.Println("you are almost as smart as me~")
			} else if chance<8&&chance>1{
				fmt.Println("not bad")
			} else if chance==1{
				fmt.Println("Finally!!!")
			}
		} else {
			chance--
			fmt.Printf("YOU HAVE ONLY%d CHANCES\n",chance)
		}
	}
}