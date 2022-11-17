import React from "react";
import "./Auth.css";
import Logo from "../../img/logo.jpeg";


const Auth = () => {

  return (
    <div className="Auth">
      <div className="a-left">
        <img className="logo" src={Logo} alt="" />
        <div className="Webname">
          <h1>Stories</h1>
          <h4>Re Discover Yourself</h4>
        </div>
      </div>

      <LogIn />
      <SignUp />
    </div>
  );
};
function LogIn() {
  return (
    <div className="a-right">
      <form className="infoForm authForm">
        <h3>Log In</h3>

        <div>
          <input
            type="text"
            placeholder="E-mail ID"
            className="infoInput"
            name="username"
          />
        </div>

        <div>
          <input
            type="password"
            className="infoInput"
            placeholder="Password"
            name="password"
          />
        </div>

        <div>
          <span style={{ fontSize: "12px" }}>
            Don't have an account! Sign up
          </span>
          <button className="button infoButton">Login</button>

        </div>
        
      </form>
    </div>
  );
}
function SignUp() {
  return (
    <div className="a-right">
      <form className="infoForm authForm">
        <h3>Sign up</h3>

        <div>
          <input
            type="text"
            placeholder="First Name"
            className="infoInput"
            name="firstname"
          />
          <input
            type="text"
            placeholder="Last Name"
            className="infoInput"
            name="lastname"
          />
        </div>

        <div>
          <input
            type="text"
            className="infoInput"
            name="username"
            placeholder="E-mail ID"
          />
        </div>

        <div>
          <input
            type="text"
            className="infoInput"
            name="password"
            placeholder="Password"
          />
          <input
            type="text"
            className="infoInput"
            name="confirmpass"
            placeholder="Confirm Password"
          />
        </div>

        <div>
          <span style={{ fontSize: '12px' }}>Already have an account. Login!</span>
          <button className="button infoButton" type="submit">Signup</button>

        </div>
        
      </form>
    </div>
  );
}

export default Auth;
