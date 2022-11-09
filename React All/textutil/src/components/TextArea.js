import React,{useState} from "react";



function TextArea() {

    const handleuppcase=()=>{

        let newtext=text.toUpperCase();
        setText(newtext);
    }

    
    const handlelowcase=()=>{

        let newtext=text.toLowerCase();
        setText(newtext);
    }

    
    
    const handleclear=()=>{

        let newtext=('');
        setText(newtext);
    }

    

    const handleonchange=(event)=>{
        setText(event.target.value)
    }

    const[text,setText]=useState('');
    return (
    <>
    <div className="container my-4">
      <div className="mb-3">
        <label for="exampleFormControlTextarea1" className="form-label">
          {" "} 
          <h2>Enter Text Here</h2>
        </label>{" "}
        <textarea
          className="form-control"
          id="exampleFormControlTextarea1" value={text} onChange={handleonchange} placeholder="Enter the text"
          rows="6"
        >
          {" "}
        </textarea>{" "}
      </div>{" "}
      <button className="btn btn-primary mx-2 my-1" onClick={handleuppcase}>Convert To Upper Case</button>
      <button className="btn btn-primary mx-2 my-1" onClick={handlelowcase}>Convert To Lower Case</button>
      <button className="btn btn-primary mx-2 my-1" onClick={handleclear}>Clear Text</button>
    </div>
    
    <div className="container my-3">
        <h3>Summary</h3>
        <p>
            Your text has {text.length} characters, {text.split(" ").length-1} words
        </p>
        <p>
            User will approx {0.008*text.split(" ").length} minutes to read this
        </p>
    </div>
    </>
  );
}

export default TextArea;
