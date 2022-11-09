// For Firebase JS SDK v7.20.0 and later, measurementId is optional
// import firebase from "firebase";
import firebase from "firebase/compat/app";
import "firebase/compat/auth"
import "firebase/compat/firestore"
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyA4B1bmecoCs0lPbLssvECkSn3GyfJGGvE",
  authDomain: "clone-6a04c.firebaseapp.com",
  projectId: "clone-6a04c",
  storageBucket: "clone-6a04c.appspot.com",
  messagingSenderId: "543859342984",
  appId: "1:543859342984:web:f8f2292c0ede0247b6e93d",
  measurementId: "G-E6DT6N6FKW"
};
  const firebaseApp = firebase.initializeApp(firebaseConfig);

  const db = firebaseApp.firestore();
  const auth = firebase.auth();
  
  export { db, auth };