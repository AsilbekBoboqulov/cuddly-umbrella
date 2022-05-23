import React from "react";
import {
  Card,
  Button,
  Row,
  Col,
  Container,
  Carousel,
  Navbar,
  Nav,
  NavDropdown,
  Form,
  bcard,
  FormControl,
} from "react-bootstrap";
// import "./class.css";
class Country extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      ref: [],
      koz: null,
    };
  }
    mana = () => {
        var value = document.getElementById('input1').value
        fetch(`https://restcountries.com/v3.1/name/${value}`)
        .then((responsive) => responsive.json())
        .then((date) => {
           
                this.setState({ ref: date })
        });
        
        
    }
  componentDidMount() {
      if (this.state.koz==null){
        fetch(`https://restcountries.com/v3.1/all`)
        .then((responsive) => responsive.json())
        .then((date) => {
            this.setState({ ref: date })
          });
    }
    else{
        fetch(`https://restcountries.com/v3.1/name/${this.state.koz}`)
        .then((responsive) => responsive.json())
        .then((date) => {
            this.setState({ ref: date })
          });
    }
      }
      
  render() {
    return (
      <div>
        <Container className="my-3">
          <Navbar bg="light" expand="lg">
            <Container fluid>
              <Navbar.Brand href="#">Country</Navbar.Brand>
              <Navbar.Toggle aria-controls="navbarScroll" />
              <Navbar.Collapse id="navbarScroll">
                <Nav
                  className="me-auto my-2 my-lg-0"
                  style={{ maxHeight: "100px" }}
                  navbarScroll
                >
                  <NavDropdown title="Link" id="navbarScrollingDropdown">
                    <NavDropdown.Item href="https://www.worldometers.info/geography/alphabetical-list-of-countries/">
                      Countrys
                    </NavDropdown.Item>
                    <NavDropdown.Item href="https://www.spacex.com/">
                      SpaceX
                    </NavDropdown.Item>
                    <NavDropdown.Divider />
                  </NavDropdown>
                </Nav>
                <Form className="d-flex">
                  <FormControl
                    type="search"
                    id="input1"
                    placeholder="Search"
                    className="lalala me-2"
                    aria-label="Search"
                  />
                  <Button variant="outline-success" onClick={this.mana}>Search</Button>
                </Form>
              </Navbar.Collapse>
            </Container>
          </Navbar>
        </Container>
        <Container fluid>
          <Carousel>
            <Carousel.Item>
              <img className="d-block w-100" src="world.jpg" alt="First slide" />
              <Carousel.Caption></Carousel.Caption>
            </Carousel.Item>
            <Carousel.Item>
              <img
                className="d-block w-100"
                src="world.jpg"
                alt="Second slide"
              />

              <Carousel.Caption></Carousel.Caption>
            </Carousel.Item>
            <Carousel.Item>
              <img className="d-block w-100" src="world.jpg" alt="Third slide" />

              <Carousel.Caption></Carousel.Caption>
            </Carousel.Item>
          </Carousel>
        </Container>
        <Container>
          <Row>
            {this.state.ref.map((qiymat, index) => (

                



              <Col key={index}>
                <Card style={{ width: "18rem" }} className=" mx-4 my-4">
                  <Card.Img variant="top" src={qiymat.flags.png} />
                  <hr/>
                  <Card.Body>
                    <Card.Title>{qiymat.name.common}</Card.Title>
                    <p>Capital: {qiymat.capital}</p>
                    <p>Time: {qiymat.timezones}</p>
                    <p>Continents: {qiymat.continents}</p>
                    <p>Population: {qiymat.population}</p>
                    <p>Area: {qiymat.area} km^2</p>
                    <a href={qiymat.maps.googleMaps}>Maps</a>
                  </Card.Body>
                </Card>
              </Col>
            ))}
          </Row>
        </Container>
        <Container fluid className="bg-dark mt-5 p-5 text-light ">
          <Row>
            <Col
              className="mt-5 text-center"
              xxl="3"
              xl="3"
              lg="3"
              md="6"
              sm="12"
            >
              <h2>Countrys</h2>
              <p>World</p>
              <p>Country</p>
              <p className="mt-4">Phone: +1 5589 55488 55</p>
              <p>Email: info@example.com</p>
            </Col>

            <Col
              className="mt-5 text-center"
              xxl="3"
              xl="3"
              lg="3"
              md="6"
              sm="12"
            >
              <h4>Useful Links</h4>
              <p>Home</p>
              <p>About us</p>
              <p>Terms of service</p>
              <p>Privacy policy</p>
            </Col>

            <Col
              className="mt-5 text-center"
              xxl="3"
              xl="3"
              lg="3"
              md="6"
              sm="12"
            >
              <h4>Our Services</h4>
              <p>Web Design</p>
              <p>Web Development </p>
              <p>Product Management</p>
              <p>Marketing </p>
              <p>Graphic Design</p>
            </Col>
            <Col
              className="mt-5 text-center"
              xxl="3"
              xl="3"
              lg="3"
              md="6"
              sm="12"
            >
              <h4>Our Newsletter</h4>
              <p>
                Tamen quem nulla quae legam multos aute sint culpa legam noster
                magna
              </p>
              <div className="inp d-flex">
                <input type="text " className="input" />
                <button className="btn btn-light ">Subscribe</button>
              </div>
            </Col>
          </Row>
        </Container>
      </div>
    );
  }
}
export default Country;
