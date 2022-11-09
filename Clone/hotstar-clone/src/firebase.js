import { initializeApp } from 'firebase/app';
import { getFirestore} from 'firebase/firestore';
import { getAuth, GoogleAuthProvider } from "firebase/auth";
import { getStorage } from "firebase/storage";

const firebaseConfig = {
  apiKey: "AIzaSyCuA6e5cBr386bS6pQDDW5_LF-PnOw48yU",
  authDomain: "hotstar-clone-4452a.firebaseapp.com",
  projectId: "hotstar-clone-4452a",
  storageBucket: "hotstar-clone-4452a.appspot.com",
  messagingSenderId: "247216818139",
  appId: "1:247216818139:web:758838c659706c1b85c9fe",
  measurementId: "G-9076XS6ZYG"
};

const firebaseApp = initializeApp(firebaseConfig);
const db = getFirestore(firebaseApp);
const auth = getAuth();
const provider = new GoogleAuthProvider();
const storage = getStorage(firebaseApp);

export { auth, provider, storage };
export default db;
