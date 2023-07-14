hash = {
    "Diogo" => "Andrade",
    "Christian" => "Rodrigues",
    "Enzo" => "Lucca"
}

puts hash.has_key?("Diogo")

hash.each do |key, value|
    puts "[#{key}: #{value}]"
end