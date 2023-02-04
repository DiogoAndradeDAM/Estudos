co = coroutine.create( function ()
    for i = 1,10,1 do
        print(i)
        print(coroutine.status(co))
        if i == 5 then coroutine.yield() end
    end
end)

coroutine.resume(co)
print(coroutine.status(co))
coroutine.resume(co)
