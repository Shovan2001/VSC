import React from "react";
import "./Header.css";
import SearchIcon from "@mui/icons-material/Search";
import ShoppingCartIcon from "@mui/icons-material/ShoppingCart";
import PersonPinCircleIcon from "@mui/icons-material/PersonPinCircle";
import { Link } from "react-router-dom";
import { useStateValue } from "./StateProvider";
import { auth } from "./firebase";

function Header() {
  const [{ basket, user }] = useStateValue();

  const handleAuthenticaton = () => {
    if (user) {
      auth.signOut();
    }
  };

  return (
    <div className="header">
      <Link to="/">
        <img
          className="header_logo"
          src="https://zeevector.com/wp-content/uploads/LOGO/Amazon-India-Logo-PNG-White2.png"
          alt=" "
        />
      </Link>

      <div className="header_location">
        <PersonPinCircleIcon className="location" />
        <div className="addline">
          <span className="location_l1">Add L1</span>
          <span className="location_l2">Add L2 </span>
        </div>
      </div>

      <div className="header_search">
        <input className="header_search_input" type="text" />
        <SearchIcon className="header_search_icon" />
      </div>
      <div className="header_nav">
        <Link to={!user && "/login"} style={{ textDecoration: "none" }}>
          <div onClick={handleAuthenticaton} className="header_option">
            <span className="header_option_l1">
              Hello,{" "}
              {user ? user.email.slice(0, user.email.indexOf("@")) : "Guest"}
            </span>
            <span className="header_option_l2">
              {user ? "Sign Out" : "Sign In"}
            </span>
          </div>
        </Link>
        <div className="header_option">
          <span className="header_option_l1">Returns</span>
          <span className="header_option_l2">& Orders </span>
        </div>
        <div className="header_option">
          <span className="header_option_l1">Your</span>
          <span className="header_option_l2">Prime</span>
        </div>

        <Link to="/checkout" style={{ textDecoration: "none" }}>
          <div className="header_option_cart">
            <ShoppingCartIcon />
            <span className="header_option_cart_count">{basket?.length}</span>
          </div>
        </Link>
      </div>
    </div>
  );
}

export default Header;
