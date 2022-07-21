import axios from "axios";

axios.get("https://api.github.om/users/maykbrito")
.then(res => {
    console.log(res.data)
})

