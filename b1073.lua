interval = io.read("*n")

for i=1, interval do
    if i % 2 == 0 then
        print(i.."^2".." = "..i*i)
    end
end
