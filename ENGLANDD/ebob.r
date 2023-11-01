my_ebob_function <- function(a, b)
{
  if (a < 0 || b < 0){
    return(-1)
  }
  else if (a == 0 || b == 0){
    return(a + b)
  }
  else{
	if (a > b){
		return(my_ebob_function(a - b, b))
	}
	else {
		return(my_ebob_function(a, b - a))
	}
  }
}

ebob <- my_ebob_function(6,12)

if (ebob == -1 || is.null(ebob)){
    cat("Negatif bir veya iki sayi var.")
} else if (ebob == 0){
  cat("Sonuc: (0)")
} else{
  cat("Ebob: ", ebob)
}
