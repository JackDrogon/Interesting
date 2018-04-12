(begin
 (define fact (lambda (n)
  (if (<= n 1) 1 (* n (fact (- n 1))))))

 (define f (lambda (return)
   (begin
    (return 2)
    1)))
 (display (f (lambda (x) x)))
 (display (callcc f))
 (fact 5)
 (display (+ 1 2 3 4 5))
)
