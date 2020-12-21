package main 

import (
    "fmt"
    )

func main() {
    var input int;
    _,err := fmt.Scanf("%d", &input)

    buatJembatan(input)

    if err != nil {
        panic(err)
    }
}


func buatJembatan(tebal_pilar int) {

    tebal_lintasan := 2

    if tebal_pilar >= 6{
      tebal_lintasan+=1
    }
    
    for baris := 0; baris < tebal_pilar + tebal_lintasan; baris++ { // every line
        for pilar_ke := 0; pilar_ke < 3; pilar_ke++{ // pillar count is adjustable
			/*
				loops:
					initial   : pilar_kiri = (tebal_pilar * 2)
					condition : pilar_kiri >= 0
					change    : pilar_kiri--

					initial   : pilar_kanan = 0
					condition : pilar_kanan <= (tebal_pilar * 2)
					change    : pilar_kanan++

				conditions:
					IF baris < tebal_lintasan
					THAN print *

					IF pilar_[kanan/kiri] > 0 + (baris - tebal_lintasan)
					AND pilar_[kanan/kiri] <= tebal_pilar + (baris - tebal_lintasan)
					THAN print *
					ELSE print [space]
			*/
            for pilar_kiri := (tebal_pilar * 2); pilar_kiri >= 0; pilar_kiri-- { // left pillar
                if baris < tebal_lintasan || (pilar_kiri > 0 + (baris - tebal_lintasan) && pilar_kiri <= tebal_pilar + (baris - tebal_lintasan)){
                    fmt.Printf("*")
                } else {
                    fmt.Printf(" ")
                }
            }
            for pilar_kanan := 0; pilar_kanan <= (tebal_pilar * 2); pilar_kanan++ { // right pillar
                if baris < tebal_lintasan || (pilar_kanan > 0 + (baris - tebal_lintasan) && pilar_kanan <= tebal_pilar + (baris - tebal_lintasan)){
                    fmt.Printf("*")
                } else {
                    fmt.Printf(" ")
                }
            }
        }
        fmt.Printf("\n") // end line
    }
}