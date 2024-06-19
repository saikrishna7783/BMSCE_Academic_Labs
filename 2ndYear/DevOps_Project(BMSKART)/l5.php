<?php
require_once "header.php";
?>
<section>
    <div class="container">
        <div class="row">
            <div class="col1">
                <div class="product">
                    <img src="img/l5.webp" alt="product" width="100%">

                    <div class="col2">
                        <h1> Apple MacBook Pro .</h1>
                        <h4>INR 69400 Rupees</h4>
                        <br>
                        <h3>Product Details</h3>
                        <p>
                        <ul>
                            <li>8-Core CPU,10-Core GPU </li>
                            <li> 8GB Unified Memory </li>
                            <li>256GB SSD Storage¹ </li>
                            <li>16-core Neural Engine</li>
                            <li>33.02 cm (13-inch) Retina display with True Tone</li>
                            <li> Two Thunderbolt / USB 4 ports</li>
                        </ul>
                        </p>
                        <br>
                        <br>
                        <br>
                        <br>
                        <button id="add-to-cart">Add to Cart</button>
                    </div>
                </div>
            </div>

        </div>
    </div>
</section>

<footer>
    <p>Copyright &copy; BMSTechKart.com </p>
</footer>

</main>

<style>
    * {
        box-sizing: border-box;
    }

    section {
        margin: auto;
        padding-top: 20px;
    }

    img {
        border-radius: 0;
        float: left;
    }

    .col1 img {
        padding-right: 50px;
    }

    .col2 {
        margin: auto;
        padding: 0 20%;
    }

    .logo_container img {
        border-radius: 500px;
    }

    .button {
        background-color: #182179;
        border: none;
        color: white;
        padding: 5px 32px;
        text-align: center;
        text-decoration: none;
        display: inline-block;
        font-size: 16px;
        border-radius: 30px;
    }
</style>

<script>
    const addToCartButton = document.getElementById("add-to-cart");
    addToCartButton.addEventListener("click", function() {
        const product = {
            name: "  Apple MacBook Pro  ",
            price: 69400,
            image: "img/l5.webp",
        };

        let cart = JSON.parse(localStorage.getItem("cart")) || [];
        cart.push(product);
        localStorage.setItem("cart", JSON.stringify(cart));
    });
    document.querySelector("#add-to-cart").addEventListener("click", function() {
        alert("Item added to cart!");
    });
</script>
</body>

</html>