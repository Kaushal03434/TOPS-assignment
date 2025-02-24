/* THEORY EXERCISE */

    /** Question 1: What do you mean by RESTful web services? **/

        /*** Answer: RESTful web services are a set of web services that adhere to the principles of REST (Representational State Transfer). They use HTTP methods (GET, POST, PUT, DELETE) for communication, and resources are represented in URLs. REST is stateless, meaning each request contains all the information needed to process it, and data is usually returned in formats like JSON or XML. ***/

    /** Question 2: What is JSON-Server? How do we use it in React? **/

        /*** Answer: JSON-Server is a simple tool that allows you to create a fake REST API using a JSON file. It mimics the functionality of a real API by using a JSON file as the database. In React, you can use JSON-Server to simulate CRUD operations (Create, Read, Update, Delete) for a front-end application. ***/

        // To use JSON-Server in React:

            // Install JSON-Server using npm or yarn:
            // npm install json-server --save-dev

            // Create a db.json file to store your data.

            // Add a script in package.json to start JSON-Server:
            // "scripts": {
            //   "start:json-server": "json-server --watch db.json --port 5000"
            // }

            // Use fetch() or axios() to make HTTP requests to the JSON-Server API.


    /** Question 3: How do you fetch data from a JSON-server API in React? Explain the role of fetch() or axios() in making API requests. **/

        /*** Answer: You can fetch data from a JSON-server API in React using the fetch() function or axios() library. ***/

            // fetch() is a built-in JavaScript function to make HTTP requests.
            // Example:
            // useEffect(() => {
            //   fetch('http://localhost:5000/users')
            //     .then((response) => response.json())
            //     .then((data) => setUsers(data));
            // }, []);

            // axios() is a promise-based HTTP client for the browser and Node.js. It's often used because it provides more features, like automatic transformation of JSON data.
            // Example:
            // import axios from 'axios';
            // useEffect(() => {
            //   axios.get('http://localhost:5000/users')
            //     .then((response) => setUsers(response.data))
            //     .catch((error) => console.error('Error fetching data:', error));
            // }, []);


    /** Question 4: What is Firebase? What features does Firebase offer? **/

        /*** 
            Answer: 
                Firebase is a platform developed by Google for creating mobile and web applications. It offers a variety of services for app development, including:
                Firebase Realtime Database: A NoSQL cloud database that supports real-time data syncing.
                Firebase Authentication: Provides simple and secure authentication methods.
                Firebase Firestore: A flexible, scalable database for mobile, web, and server development.
                Firebase Hosting: Fast, secure web hosting for static files.
                Firebase Cloud Functions: Functions that run in the cloud, triggered by Firebase events.
                Firebase Cloud Messaging: Push notifications for mobile and web apps.
        ***/


    /** Question 5: Discuss the importance of handling errors and loading states when working with APIs in React. **/

        /*** Answer: 
                Handling errors and loading states is crucial in providing a good user experience. While fetching data from an API:

                Loading State: It's important to display a loading indicator while the data is being fetched. This ensures the user knows that the app is working.
                Error Handling: Errors may occur during the API request (e.g., network failure or bad response). Displaying an error message helps users understand when something goes wrong.
        ***/

            // Example:
            // const [loading, setLoading] = useState(true);
            // const [error, setError] = useState(null);

            // useEffect(() => {
            //   fetchData()
            //     .then(() => setLoading(false))
            //     .catch((error) => {
            //       setError(error);
            //       setLoading(false);
            //     });
            // }, []);

            // return (
            //   <div>
            //     {loading && <p>Loading...</p>}
            //     {error && <p>Error: {error.message}</p>}
            //   </div>
            // );