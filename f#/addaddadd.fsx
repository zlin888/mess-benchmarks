#if INTERACTIVE
#time "on"
#endif

let withTiming func arg =
    let sw = System.Diagnostics.Stopwatch.StartNew()
    func arg |> ignore
    sw.Stop()
    sw.Elapsed

let runNTimes times func arg =
    Array.init times (fun _ -> func arg)

let benchmark func arg =
    let func = withTiming func
    runNTimes 1000000 func arg
    // |> Array.averageBy(fun r -> r.TotalSeconds)
    |> Array.sumBy(fun r -> r.TotalSeconds)
    |> System.TimeSpan.FromSeconds

let a = [0 .. 100] 
let b = [0 .. 100] 
let c = [0 .. 100] 

let add a b = 
    List.zip a b |> List.map (fun x -> fst x + snd x) 

let add3 a b c =
    add a b |> add c
    
let addd3 a b c =
    List.zip3 a b c |> List.map (fun (x,y,z) -> x+y+z)
// add3 a b c |> printfn "%A"

let addaddadd dummy = addd3 a b c 

let t = benchmark addaddadd "DUMMY" 

string t |> printfn "%s"