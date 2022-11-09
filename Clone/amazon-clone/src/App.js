import React,{useEffect} from "react";
import "./App.css";
import { auth } from "./firebase";
import Header from "./Header";
import Home from "./Home";
import Payment from "./Payment";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import Checkout from "./Checkout";
import Login from "./Login";
import { useStateValue } from "./StateProvider";
import {loadStripe} from "@stripe/stripe-js"
import {Elements} from "@stripe/react-stripe-js"

const promise = loadStripe('pk_test_51LYmOxSH6Sz1MCzgP0kugZNUW2WAIbyyMjUrJ8HSkX7NDp0CKFwR5vYabKAbFqLtnPNw8YhZbtnsOe0FehE8TMLp00DS0osIQA')

function App() {

  const[{},dispatch]=useStateValue();
  useEffect(() => {
    // will only run once when the app component loads...

    auth.onAuthStateChanged((authUser) => {
      console.log("THE USER IS >>> ", authUser);

      if (authUser) {
        // the user just logged in / the user was logged in

        dispatch({
          type: "SET_USER",
          user: authUser,
        });
      } else {
        // the user is logged out
        dispatch({
          type: "SET_USER",
          user: null,
        });
      }
    });
  }, []);
  return (
    <Router>
      <div className="app">
      
        <Routes>
          <Route exact path="/login" element={<Login/>}/>

          <Route exact path="/checkout" element={<><Header/><Checkout/></>}/>

          <Route exact path="/payment" element={<><Header/><Elements stripe={promise}><Payment/></Elements></>}/>
            
          <Route exact path="/" element={ <><Header/><Home/></>}/>
          
        </Routes>
      </div>
    </Router>
  );
}

export default App;
