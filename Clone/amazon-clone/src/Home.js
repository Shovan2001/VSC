import React from "react";
import "./Home.css";
import Product from "./Product";
import Banner1 from "./Banner/Banner1.jpg";
import Banner2 from "./Banner/Banner2.jpg";
import Banner3 from "./Banner/Banner3.jpg";
import Banner4 from "./Banner/Banner4.jpg";
import Banner5 from "./Banner/Banner5.jpg";
import Banner6 from "./Banner/Banner6.jpg";
import Banner7 from "./Banner/Banner7.jpg";
import Banner8 from "./Banner/Banner8.jpg";
import Banner9 from "./Banner/Banner9.jpg";
import Banner10 from "./Banner/Banner10.jpg";
import Banner11 from "./Banner/Banner11.jpg";
import Slider from "./Slider";

function Home() {
  const bannerImages = [Banner1, Banner2, Banner3, Banner4, Banner5, Banner6,Banner7,Banner8,Banner9,Banner10,Banner11];
  return (
    <div className="home">
      <div className="home__container">
        {/* <img
          className="home__image"
          src="https://images-eu.ssl-images-amazon.com/images/G/02/digital/video/merch2016/Hero/Covid19/Generic/GWBleedingHero_ENG_COVIDUPDATE__XSite_1500x600_PV_en-GB._CB428684220_.jpg"
          alt=""
        /> */}
        <Slider images={bannerImages} />

        <div className="home__row__start">
          <div className="home__row">
            <Product
              id="1541454"
              title="REDMI Note 10 (Aqua Green, 64 GB)  (4 GB RAM/8 GB RAM/16 GB RAM)"
              price={11}
              rating={4}
              image="https://images-na.ssl-images-amazon.com/images/I/71OGzLCrjZS._SL1500_.jpg"
            />
            <Product
              id="12321341"
              title="The Lean Startup: How Constant Innovation Creates Radically Successful Businesses Paperback"
              price={11.96}
              rating={5}
              image="https://images-na.ssl-images-amazon.com/images/I/51Zymoq7UnL._SX325_BO1,204,203,200_.jpg"
            />
            <Product
              id="49538094"
              title="Kenwood kMix Stand Mixer for Baking, Stylish Kitchen Mixer with K-beater, Dough Hook and Whisk, 5 Litre Glass Bowl"
              price={239.0}
              rating={4}
              image="https://images-na.ssl-images-amazon.com/images/I/81O%2BGNdkzKL._AC_SX450_.jpg"
            />
          </div>

          <div className="home__row">
            <Product
              id="4903850"
              title="Samsung LC49RG90SSUXEN 49' Curved LED Gaming Monitor"
              price={199.99}
              rating={3}
              image="https://images-na.ssl-images-amazon.com/images/I/71Swqqe7XAL._AC_SX466_.jpg"
            />
            <Product
              id="23445930"
              title="Amazon Echo (3rd generation) | Smart speaker with Alexa, Charcoal Fabric"
              price={98.99}
              rating={5}
              image="https://media.very.co.uk/i/very/P6LTG_SQ1_0000000071_CHARCOAL_SLf?$300x400_retinamobilex2$"
            />
            <Product
              id="3254354345"
              title="New Apple iPad Pro (12.9-inch, Wi-Fi, 128GB) - Silver (4th Generation)"
              price={598.99}
              rating={4}
              image="https://images-na.ssl-images-amazon.com/images/I/816ctt5WV5L._AC_SX385_.jpg"
            />
          </div>

          <div className="home__row">
            <Product
              id="90829332"
              title="Samsung LC49RG90SSUXEN 49' Curved LED Gaming Monitor - Super Ultra Wide Dual WQHD 5120 x 1440"
              price={1094.98}
              rating={4}
              image="https://images-na.ssl-images-amazon.com/images/I/6125mFrzr6L._AC_SX355_.jpg"
            />
          </div>
        </div>
      </div>
    </div>
  );
}

export default Home;
