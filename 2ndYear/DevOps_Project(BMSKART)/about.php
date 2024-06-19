<?php
require_once "header.php";
?>

<head>
  <title>About Us</title>
</head>

<!----About section start---->
<section class="about">
  <div class="main">
    <img src="img/saikrishna.jpeg">
    <div class="about-text">
      <h3>SAI KRISHNA</h3>
      <h5>Contributor <span>& Designer</span></h5>
      <p>I am a front-end web developer. I can provide clean code and pixel perfect design. Having knowledge in back-end technologies allows me to develop websites that are not only visually appealing but also fully functional and dynamic. I believe that a website's responsiveness is crucial to ensure accessibility to all users, regardless of their device, and I achieve this by leveraging my skills in PHP, mysqli, and database connectivity.</p>
      <p>saikrishnapanyam@gmail.com</p>
      <a href="https://www.linkedin.com/in/sai-krishna-95198a228">Let's Talk</a>
    </div>
  </div>
</section>

<section class="about">
  <div class="main">
    <img src="img/ovhay.jpeg">
    <div class="about-text">
      <h3>OVHAY KUMAR</h3>
      <h5>Contributor <span>& Designer</span></h5>
      <p>Frontend web developer with expertise in HTML, CSS, and JavaScript. I can provide clean and well-organized code along with pixel-perfect designs. My knowledge of CSS and JS allows me to create interactive web animations that enhance user experience. As a strong advocate of responsive design, I believe in making websites accessible to users on all devices. My skills in database connectivity, including knowledge of mysqli, enable me to create dynamic and data-driven websites.</p>
      <p>ovhaykumar00@gmail.com</p>
      <a href="https://www.linkedin.com/in/ovhay-kumar-28b597234">lets talk</a>
    </div>
  </div>
</section>

<section class="about">
  <div class="main">
    <img src="img/pallavi.jpeg">
    <div class="about-text">
      <h3>PALLAVI M</h3>
      <h5>Contributor <span>& Designer</span></h5>
      <p>I can provide clean code and pixel perfect design. I also make the website
        more & more interactive with web animations.I can provide clean code and pixel perfect design. I also make the
        website more & more interactive with web animations.A responsive design makes your website accessible to all
        users, regardless of their device.</p>
      <p>pallavimanuballa@gmail.com</p>
      <a href="https://www.linkedin.com/in/pallavi-manuballa-b916a025a/">Let's Talk</a>
    </div>
  </div>
</section>

<section class="about">
  <div class="main">
    <img src="img/mee.jpeg">
    <div class="about-text">
      <h3>PADMA PALLE</h3>
      <h5>Contributor <span>& Designer</span></h5>
      <p>As a front-end web developer, I specialize in creating visually appealing and seamless user experiences through clean and precise coding. I am skilled in implementing responsive layouts that can adapt to any screen size, providing accessibility to all users.</p>
      <p>padmapalle460@gmail.com</p>
      <a href="https://www.linkedin.com/in/padma-palle-9917a2244">Let's Talk</a>
    </div>
  </div>
</section>


<!------footer start--------->
<footer>
  <p>BMS TECHKART</p>
  <p>KEEP CONNECTED WITH BMS TECHKART</p>
  <p class="end">CopyRight By BMS TECHKART</p>
</footer>
<style>
  html,
  body {
    margin: 0;
    padding: 0;
    height: 100%;
  }


  * {
    padding: 0;
    margin: 0;
    font-family: 'Josefin Sans', sans-serif;
    box-sizing: border-box;
  }

  .logo_container img {
    border-radius: 500px;
  }

  .hero {
    height: 100vh;
    width: 100%;
    background-image: url(../img/background.jpg);
    background-size: cover;
    background-position: center;

  }


  nav {
    display: flex;
    align-items: center;
    justify-content: space-between;
    padding-top: 45px;
    padding-left: 8%;
    padding-right: 8%;
  }

  .logo {
    color: rgb(231, 6, 6);
    font-size: 35px;
    letter-spacing: 1px;
    cursor: pointer;
  }

  span {
    color: #f9004d;
  }

  nav ul li {
    list-style-type: none;
    display: inline-block;
    padding: 10px 25px;

  }

  section {
    margin-bottom: 0;
  }

  .main a {
    color: #f9004d;
  }

  nav ul li a {
    color: #f9004d;
    text-decoration: none;
    font-weight: bold;
    text-transform: capitalize;
  }

  nav ul li a:hover {
    color: #f9004d;
    transition: .4s;
  }

  .btn {
    background-color: #f9004d;
    color: white;
    text-decoration: none;
    border: 2px solid transparent;
    font-weight: bold;
    padding: 10px 25px;
    border-radius: 30px;
    transition: transform .4s;
  }

  .btn:hover {
    transform: scale(1.2);
  }

  .content {
    position: absolute;
    top: 50%;
    left: 8%;
    transform: translateY(-50%);
  }

  h1 {
    color: white;
    margin: 20px 0px 20px;
    font-size: 75px;
  }

  h3 {
    color: white;
    font-size: 25px;
    margin-bottom: 50px;
  }

  h4 {
    color: #fcfc;
    letter-spacing: 2px;
    font-size: 20px;
  }

  .newslatter form {
    width: 380px;
    max-width: 100%;
    position: relative;
  }

  .newslatter form input:first-child {
    display: inline-block;
    width: 100%;
    padding: 14px 130px 14px 15px;
    border: 2px solid #f9004d;
    outline: none;
    border-radius: 30px;
  }

  .newslatter form input:last-child {
    position: absolute;
    display: inline-block;
    outline: none;
    border: none;
    padding: 10px 30px;
    border-radius: 30px;
    background-color: #f9004d;
    color: white;
    box-shadow: 0px 0px 5px #000, 0px 0px 15px #858585;
    top: 6px;
    right: 6px;
  }

  .about {
    width: 100%;
    padding: 100px 0px;
    background-color: #191919;
  }

  .about img {
    height: auto;
    width: 500px;
  }

  .about-text {
    width: 550px;
  }

  .main {
    width: 1130px;
    max-width: 95%;
    margin: 0 auto;
    display: flex;
    align-items: center;
    justify-content: space-around;
    border-radius: 500px;
  }

  .main img {
    border-radius: 500px;
  }

  .about-text h2 {
    color: white;
    font-size: 75px;
    text-transform: capitalize;
    margin-bottom: 20px;
  }

  .about-text h5 {
    color: white;
    letter-spacing: 2px;
    font-size: 22px;
    margin-bottom: 25px;
    text-transform: capitalize;
  }

  .about-text p {
    color: #fcfc;
    letter-spacing: 1px;
    line-height: 28px;
    font-size: 18px;
    margin-bottom: 45px;
  }

  button {
    background-color: #f9004d;
    color: white;
    text-decoration: none;
    border: 2px solid transparent;
    font-weight: bold;
    padding: 13px 30px;
    border-radius: 30px;
    transition: .4s;
  }

  button:hover {
    background-color: transparent;
    border: 2px solid #f9004d;
    cursor: pointer;
  }

  .service {
    background: #101010;
    width: 100%;
    padding: 100px 0px;
  }

  .title h2 {
    color: white;
    font-size: 75px;
    width: 1130px;
    margin: 30px auto;
    text-align: center;
  }

  .box {
    display: flex;
    justify-content: center;
    align-items: center;
    min-height: 400px;
  }

  .card {
    height: 365px;
    width: 335px;
    padding: 20px 35px;
    background: #191919;
    border-radius: 20px;
    margin: 15px;
    position: relative;
    overflow: hidden;
    text-align: center;
  }

  .card i {
    font-size: 50px;
    display: block;
    text-align: center;
    margin: 25px 0px;
    color: #f9004d;

  }

  h5 {
    color: white;
    font-size: 23px;
    margin-bottom: 15px;
  }

  .pra p {
    color: #fcfc;
    font-size: 16px;
    line-height: 27px;
    margin-bottom: 25px;
  }

  .card .button {
    background-color: #f9004d;
    color: white;
    text-decoration: none;
    border: 2px solid transparent;
    font-weight: bold;
    padding: 9px 22px;
    border-radius: 30px;
    transition: .4s;
  }

  .card .button:hover {
    background-color: transparent;
    border: 2px solid #f9004d;
    cursor: pointer;
  }

  .contact-me {
    width: 100%;
    height: 290px;
    background: #191919;
    display: flex;
    align-items: center;
    flex-direction: column;
    justify-content: center;
  }

  .contact-me p {
    color: white;
    font-size: 30px;
    font-weight: bold;
    margin-bottom: 25px;
  }

  .contact-me .button-two {
    background-color: #f9004d;
    color: white;
    text-decoration: none;
    border: 2px solid transparent;
    font-weight: bold;
    padding: 13px 30px;
    border-radius: 30px;
    transition: .4s;
  }

  .contact-me .button-two:hover {
    background-color: transparent;
    border: 2px solid #f9004d;
    cursor: pointer;
  }

  footer {
    position: relative;
    width: 100%;
    height: 400px;
    background: #101010;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
    padding-bottom: 0;
    margin-bottom: 0;
  }

  footer p:nth-child(1) {
    font-size: 30px;
    color: white;
    margin-bottom: 20px;
    font-weight: bold;
  }

  footer p:nth-child(2) {
    color: white;
    font-size: 17px;
    width: 500px;
    text-align: center;
    line-height: 26px;
  }

  .social {
    display: flex;
  }

  .social a {
    width: 45px;
    height: 45px;
    display: flex;
    align-items: center;
    justify-content: center;
    background: #f9004d;
    border-radius: 50%;
    margin: 22px 10px;
    color: white;
    text-decoration: none;
    font-size: 20px;
  }

  .social a:hover {
    transform: scale(1.3);
    transition: .3s;
  }

  .end {
    position: absolute;
    color: #f9004d;
    bottom: 35px;
    font-size: 14px;
  }
</style>
</body>

</html>